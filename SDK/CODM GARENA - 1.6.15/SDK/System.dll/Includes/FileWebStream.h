#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FileWebStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "FileWebStream"));
	}

	template <typename T = uintptr_t> T& webRequest() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Close() {
		return ((T (*)(FileWebStream*))(Il2CppBase() + 0x42CA09C))(this);
	}

};

}
