#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Data"));
	}

	template <typename T = int32_t> T& ansi() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ebcdic() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& mac() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& oem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& list_sep() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
