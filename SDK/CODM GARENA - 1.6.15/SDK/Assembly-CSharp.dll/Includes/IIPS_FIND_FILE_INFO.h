#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIPSFINDFILEINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIPS_FIND_FILE_INFO"));
	}

	template <typename T = uint32_t> T& fileId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& fileSize() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = unsigned char> T& isDirectory() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
