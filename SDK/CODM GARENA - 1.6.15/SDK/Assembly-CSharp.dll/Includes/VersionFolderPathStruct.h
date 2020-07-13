#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VersionFolderPathStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VersionFolderPathStruct"));
	}

	template <typename T = Il2CppString*> T& fullPath() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& versionCode() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
