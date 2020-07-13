#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DriveButtonConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DriveButtonConfig"));
	}

	template <typename T = uintptr_t> T& buttonType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& forward() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& backward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& left() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& right() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& buttonSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& joystickCenter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& joystickSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& up() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& down() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& handspikeBackward() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector2> T& handspike() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& handspikeSize() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector2> T& accBtn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
