#pragma once

#include "llvm/IR/Value.h"

#include "../ast.h"

using namespace llvm;

class VariableAST: public AST {
  std::string name;
  int size;

  public:
    VariableAST(
      std::string name, 
      int size
    ): name(name), size(size) { }
    Value *codeGen() override;
    std::string out() override;
};

class CastAST: public AST {
  std::string name;
  Type *to;

  public:
    CastAST(std::string name, Type *to): name(name), to(to) { }
    Value *codeGen() override;
    std::string out() override;
};