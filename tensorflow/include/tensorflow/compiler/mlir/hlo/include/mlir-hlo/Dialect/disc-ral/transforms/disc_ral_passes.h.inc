/* Autogenerated by mlir-tblgen; don't manually edit */
#ifdef GEN_PASS_CLASSES

//===----------------------------------------------------------------------===//
// RalInjectExecutionContextPass
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class RalInjectExecutionContextPassBase : public ::mlir::OperationPass<ModuleOp> {
public:
  using Base = RalInjectExecutionContextPassBase;

  RalInjectExecutionContextPassBase() : ::mlir::OperationPass<ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  RalInjectExecutionContextPassBase(const RalInjectExecutionContextPassBase &other) : ::mlir::OperationPass<ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("disc-ral-inject-execution-context");
  }
  ::llvm::StringRef getArgument() const override { return "disc-ral-inject-execution-context"; }

  ::llvm::StringRef getDescription() const override { return "Inject DISC RAL execution context."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("RalInjectExecutionContextPass");
  }
  ::llvm::StringRef getName() const override { return "RalInjectExecutionContextPass"; }

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
  ::mlir::Pass::Option<std::string> entry_func_name_{*this, "entry-func-name", ::llvm::cl::desc("Name of the entry function."), ::llvm::cl::init("main")};
};

//===----------------------------------------------------------------------===//
// RalLowerToLibraryCallPass
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class RalLowerToLibraryCallPassBase : public ::mlir::FunctionPass {
public:
  using Base = RalLowerToLibraryCallPassBase;

  RalLowerToLibraryCallPassBase() : ::mlir::FunctionPass(::mlir::TypeID::get<DerivedT>()) {}
  RalLowerToLibraryCallPassBase(const RalLowerToLibraryCallPassBase &other) : ::mlir::FunctionPass(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("disc-ral-lower-to-library-call");
  }
  ::llvm::StringRef getArgument() const override { return "disc-ral-lower-to-library-call"; }

  ::llvm::StringRef getDescription() const override { return "Lower some specific ops to library calls (modeled by `disc_ral.launch` op)."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("RalLowerToLibraryCallPass");
  }
  ::llvm::StringRef getName() const override { return "RalLowerToLibraryCallPass"; }

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
// RalToLLVMPass
//===----------------------------------------------------------------------===//

template <typename DerivedT>
class RalToLLVMPassBase : public ::mlir::OperationPass<ModuleOp> {
public:
  using Base = RalToLLVMPassBase;

  RalToLLVMPassBase() : ::mlir::OperationPass<ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  RalToLLVMPassBase(const RalToLLVMPassBase &other) : ::mlir::OperationPass<ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("disc-ral-to-llvm");
  }
  ::llvm::StringRef getArgument() const override { return "disc-ral-to-llvm"; }

  ::llvm::StringRef getDescription() const override { return "Pass for applying LLVM legalization patterns."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("RalToLLVMPass");
  }
  ::llvm::StringRef getName() const override { return "RalToLLVMPass"; }

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
#undef GEN_PASS_CLASSES
#endif // GEN_PASS_CLASSES
#ifdef GEN_PASS_REGISTRATION

//===----------------------------------------------------------------------===//
// RalInjectExecutionContextPass Registration
//===----------------------------------------------------------------------===//

inline void registerRalInjectExecutionContextPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createRalInjectExecutionContextPass();
  });
}

//===----------------------------------------------------------------------===//
// RalLowerToLibraryCallPass Registration
//===----------------------------------------------------------------------===//

inline void registerRalLowerToLibraryCallPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createRalLowerToLibraryCallPass();
  });
}

//===----------------------------------------------------------------------===//
// RalToLLVMPass Registration
//===----------------------------------------------------------------------===//

inline void registerRalToLLVMPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createRalToLLVMPass();
  });
}

//===----------------------------------------------------------------------===//
// RAL Registration
//===----------------------------------------------------------------------===//

inline void registerRALPasses() {
  registerRalInjectExecutionContextPassPass();
  registerRalLowerToLibraryCallPassPass();
  registerRalToLLVMPassPass();
}
#undef GEN_PASS_REGISTRATION
#endif // GEN_PASS_REGISTRATION