/* Autogenerated by mlir-tblgen; don't manually edit */
#ifdef GEN_PASS_CLASSES

//===----------------------------------------------------------------------===//
// FuncBufferize
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class FuncBufferizeBase : public ::mlir::OperationPass<ModuleOp> {
public:
  using Base = FuncBufferizeBase;

  FuncBufferizeBase() : ::mlir::OperationPass<ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  FuncBufferizeBase(const FuncBufferizeBase &other) : ::mlir::OperationPass<ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("func-bufferize");
  }
  ::llvm::StringRef getArgument() const override { return "func-bufferize"; }

  ::llvm::StringRef getDescription() const override { return "Bufferize func/call/return ops"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("FuncBufferize");
  }
  ::llvm::StringRef getName() const override { return "FuncBufferize"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<memref::MemRefDialect>();

  }

protected:
};

//===----------------------------------------------------------------------===//
// StdBufferize
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class StdBufferizeBase : public ::mlir::FunctionPass {
public:
  using Base = StdBufferizeBase;

  StdBufferizeBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  StdBufferizeBase(const StdBufferizeBase &other) : ::mlir::FunctionPass(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("std-bufferize");
  }
  ::llvm::StringRef getArgument() const override { return "std-bufferize"; }

  ::llvm::StringRef getDescription() const override { return "Bufferize the std dialect"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("StdBufferize");
  }
  ::llvm::StringRef getName() const override { return "StdBufferize"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<memref::MemRefDialect>();

  registry.insert<scf::SCFDialect>();

  }

protected:
};

//===----------------------------------------------------------------------===//
// StdExpandOps
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class StdExpandOpsBase : public ::mlir::FunctionPass {
public:
  using Base = StdExpandOpsBase;

  StdExpandOpsBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  StdExpandOpsBase(const StdExpandOpsBase &other) : ::mlir::FunctionPass(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("std-expand");
  }
  ::llvm::StringRef getArgument() const override { return "std-expand"; }

  ::llvm::StringRef getDescription() const override { return "Legalize std operations to be convertible to LLVM."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("StdExpandOps");
  }
  ::llvm::StringRef getName() const override { return "StdExpandOps"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  }

protected:
};

//===----------------------------------------------------------------------===//
// TensorConstantBufferize
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class TensorConstantBufferizeBase : public ::mlir::OperationPass<ModuleOp> {
public:
  using Base = TensorConstantBufferizeBase;

  TensorConstantBufferizeBase() : ::mlir::OperationPass<ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  TensorConstantBufferizeBase(const TensorConstantBufferizeBase &other) : ::mlir::OperationPass<ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("tensor-constant-bufferize");
  }
  ::llvm::StringRef getArgument() const override { return "tensor-constant-bufferize"; }

  ::llvm::StringRef getDescription() const override { return "Bufferize tensor constants."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("TensorConstantBufferize");
  }
  ::llvm::StringRef getName() const override { return "TensorConstantBufferize"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<memref::MemRefDialect>();

  }

protected:
};
#undef GEN_PASS_CLASSES
#endif // GEN_PASS_CLASSES
#ifdef GEN_PASS_REGISTRATION

//===----------------------------------------------------------------------===//
// FuncBufferize Registration
//===----------------------------------------------------------------------===//

inline void registerFuncBufferizePass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return mlir::createFuncBufferizePass();
  });
}

//===----------------------------------------------------------------------===//
// StdBufferize Registration
//===----------------------------------------------------------------------===//

inline void registerStdBufferizePass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return mlir::createStdBufferizePass();
  });
}

//===----------------------------------------------------------------------===//
// StdExpandOps Registration
//===----------------------------------------------------------------------===//

inline void registerStdExpandOpsPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return mlir::createStdExpandOpsPass();
  });
}

//===----------------------------------------------------------------------===//
// TensorConstantBufferize Registration
//===----------------------------------------------------------------------===//

inline void registerTensorConstantBufferizePass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return mlir::createTensorConstantBufferizePass();
  });
}

//===----------------------------------------------------------------------===//
// Standard Registration
//===----------------------------------------------------------------------===//

inline void registerStandardPasses() {
  registerFuncBufferizePass();
  registerStdBufferizePass();
  registerStdExpandOpsPass();
  registerTensorConstantBufferizePass();
}
#undef GEN_PASS_REGISTRATION
#endif // GEN_PASS_REGISTRATION