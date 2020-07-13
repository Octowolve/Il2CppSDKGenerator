#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIPSPACKAGEINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIPS_PACKAGE_INFO"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& szPackageName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& szPackageFilePath() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint64_t> T& currentSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& totalSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
