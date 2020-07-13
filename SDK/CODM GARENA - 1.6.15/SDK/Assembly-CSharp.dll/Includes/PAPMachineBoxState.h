#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PAPMachineBoxState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PAPMachineBoxState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePAPBOX_HIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePAPBOX_ACTIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePAPBOX_HOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
