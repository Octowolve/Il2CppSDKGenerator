#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "TimeType"));
	}

	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsDst() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TimeType*))(Il2CppBase() + 0x4ED9EE8))(this);
	}

};

}
