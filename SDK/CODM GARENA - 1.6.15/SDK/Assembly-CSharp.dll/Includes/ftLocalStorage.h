#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ftLocalStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ftLocalStorage"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& modifiedAssetPathList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& modifiedAssetPaddingHash() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
