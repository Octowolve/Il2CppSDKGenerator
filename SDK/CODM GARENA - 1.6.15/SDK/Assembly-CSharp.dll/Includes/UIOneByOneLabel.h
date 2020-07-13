#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIOneByOneLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIOneByOneLabel"));
	}

	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = Il2CppString*> T& m_CacheStringValue() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& m_StepTime() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& m_StringItor() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& m_SBString() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = bool> T& m_DisplayFinished() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOneByOneDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(UIOneByOneLabel*, float))(Il2CppBase() + 0x2F69200))(this, value);
	}
	template <typename T = void> T DoOneByOneDisplay() {
		return ((T (*)(UIOneByOneLabel*))(Il2CppBase() + 0x2F69208))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIOneByOneLabel*))(Il2CppBase() + 0x2F69414))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UIOneByOneLabel*))(Il2CppBase() + 0x2F694C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(UIOneByOneLabel*))(Il2CppBase() + 0x2F6955C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(UIOneByOneLabel*))(Il2CppBase() + 0x2F69564))(this);
	}

};

}
