#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics.SymbolStore {

class ISymbolWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics.SymbolStore", "ISymbolWriter"));
	}


	template <typename T = void> T Initialize(uintptr_t emitter, Il2CppString* filename, bool fFullBuild) {
		return ((T (*)(ISymbolWriter*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, emitter, filename, fFullBuild);
	}

};

}
