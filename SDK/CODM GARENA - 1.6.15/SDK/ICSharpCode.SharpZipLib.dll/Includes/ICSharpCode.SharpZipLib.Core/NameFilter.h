#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class NameFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "NameFilter"));
	}

	template <typename T = Il2CppString*> T& filter_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& inclusions_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& exclusions_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T SplitQuoted(Il2CppString* original) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A6B1AC))(0, original);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NameFilter*))(Il2CppBase() + 0x4A6B5EC))(this);
	}
	template <typename T = bool> T IsIncluded(Il2CppString* name) {
		return ((T (*)(NameFilter*, Il2CppString*))(Il2CppBase() + 0x4A6B5F4))(this, name);
	}
	template <typename T = bool> T IsExcluded(Il2CppString* name) {
		return ((T (*)(NameFilter*, Il2CppString*))(Il2CppBase() + 0x4A6B7E0))(this, name);
	}
	template <typename T = bool> T IsMatch(Il2CppString* name) {
		return ((T (*)(NameFilter*, Il2CppString*))(Il2CppBase() + 0x4A6B994))(this, name);
	}
	template <typename T = void> T Compile() {
		return ((T (*)(NameFilter*))(Il2CppBase() + 0x4A6AECC))(this);
	}

};

}
