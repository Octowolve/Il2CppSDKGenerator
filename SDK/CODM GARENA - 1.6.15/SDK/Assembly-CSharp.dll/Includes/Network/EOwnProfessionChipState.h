#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EOwnProfessionChipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EOwnProfessionChipState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EOWNPROFESSION_CHIP_STATE_OWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EOWNPROFESSION_CHIP_STATE_LOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EOWNPROFESSION_CHIP_STATE_FORBIDDEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
