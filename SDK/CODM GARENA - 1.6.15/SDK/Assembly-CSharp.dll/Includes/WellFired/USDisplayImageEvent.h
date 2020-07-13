#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USDisplayImageEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USDisplayImageEvent"));
	}

	template <typename T = uintptr_t> T& uiLayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fadeCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& displayImage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& displayPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anchorPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& currentCurveSampleTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A39F9C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USDisplayImageEvent*, float))(Il2CppBase() + 0x4A3A0F0))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3A19C))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3A318))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3A3C8))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3A46C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3AAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3AB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USDisplayImageEvent*))(Il2CppBase() + 0x4A3AB0C))(this);
	}

};

}
