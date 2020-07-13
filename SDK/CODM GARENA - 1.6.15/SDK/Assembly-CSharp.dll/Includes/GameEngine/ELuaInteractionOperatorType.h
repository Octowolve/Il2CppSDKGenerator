#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ELuaInteractionOperatorType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ELuaInteractionOperatorType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPERATE_CLICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPERATE_CYCLE_CLICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPERATE_CYCLE_CLICK_MOVEING_INTERRUPT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPERATE_CYCLE_CLICK_EXCLUSIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
