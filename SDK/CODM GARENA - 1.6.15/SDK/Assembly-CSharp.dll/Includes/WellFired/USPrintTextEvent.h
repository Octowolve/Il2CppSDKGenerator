#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPrintTextEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USPrintTextEvent"));
	}

	template <typename T = uintptr_t> T& uiLayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& textToPrint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppRect> T& position() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& printRatePerCharacter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& priorText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& currentText() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& display() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A44264))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USPrintTextEvent*, float))(Il2CppBase() + 0x4A4438C))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A444AC))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A4455C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A44608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A4477C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USPrintTextEvent*))(Il2CppBase() + 0x4A44784))(this);
	}

};

}
