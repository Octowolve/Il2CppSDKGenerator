#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Touch3DFireGameHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Touch3DFireGameHandle"));
	}

	template <typename T = float> T& m_TouchForce() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_StartFire() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& m_LastPointFirePos() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& m_LastFirePos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_LastUpdateFirePosTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update3DTouchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_TouchForce() {
		return ((T (*)(Touch3DFireGameHandle*))(Il2CppBase() + 0x34377A4))(this);
	}
	template <typename T = void> T Update3DTouchInfo(int32_t x, int32_t y, float force) {
		return ((T (*)(Touch3DFireGameHandle*, int32_t, int32_t, float))(Il2CppBase() + 0x34377AC))(this, x, y, force);
	}

};

}
