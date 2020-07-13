#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Box
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Box"));
	}

	template <typename T = Il2CppVector3> T& localFrontTopLeft() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& localFrontTopRight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& localFrontBottomLeft() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& localFrontBottomRight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& origin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T get_localBackTopLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BDA25C))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackTopRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BDA28C))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackBottomLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BDA2BC))(this);
	}
	template <typename T = Il2CppVector3> T get_localBackBottomRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BDA2EC))(this);
	}
	template <typename T = Il2CppVector3> T get_frontTopLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD940C))(this);
	}
	template <typename T = Il2CppVector3> T get_frontTopRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD9450))(this);
	}
	template <typename T = Il2CppVector3> T get_frontBottomLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD9494))(this);
	}
	template <typename T = Il2CppVector3> T get_frontBottomRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD94D8))(this);
	}
	template <typename T = Il2CppVector3> T get_backTopLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD934C))(this);
	}
	template <typename T = Il2CppVector3> T get_backTopRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD93AC))(this);
	}
	template <typename T = Il2CppVector3> T get_backBottomLeft() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD928C))(this);
	}
	template <typename T = Il2CppVector3> T get_backBottomRight() {
		return ((T (*)(Box*))(Il2CppBase() + 0x4BD92EC))(this);
	}
	template <typename T = void> T Rotate(Il2CppQuaternion orientation) {
		return ((T (*)(Box*, Il2CppQuaternion))(Il2CppBase() + 0x4BDA030))(this, orientation);
	}

};

}
