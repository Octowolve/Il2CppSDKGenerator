#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EBRChipMachineErrCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EBRChipMachineErrCode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EBR_CHIP_MACHINE_ERR_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBR_CHIP_MACHINE_UID_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBR_CHIP_MACHINE_INDEX_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBR_CHIP_MACHINE_BOX_EMPTY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
