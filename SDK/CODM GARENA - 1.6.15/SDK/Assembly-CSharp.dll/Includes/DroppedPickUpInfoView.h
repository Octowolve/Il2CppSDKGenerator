#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DroppedPickUpInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DroppedPickUpInfoView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_CurTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DroppedPickUpInfoView*))(Il2CppBase() + 0x417952C))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(DroppedPickUpInfoView*))(Il2CppBase() + 0x4179330))(this);
	}

};

}
