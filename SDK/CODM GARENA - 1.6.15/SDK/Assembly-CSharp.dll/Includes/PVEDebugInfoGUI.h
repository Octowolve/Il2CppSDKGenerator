#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEDebugInfoGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEDebugInfoGUI"));
	}

	template <typename T = bool> T& bDebugPVE() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bShowDebugInfo() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& bShowGMButtons() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int32_t> T& curInfo1Idx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& curInfo2Idx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& curGMIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxLogLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& FontSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& ColWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> T& m_LogListToLocal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_LogListFromLocal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalDamageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToLogQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDrawDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginShowGMButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGMButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PVEDebugInfoGUI*))(Il2CppBase() + 0x406AFBC))(this);
	}
	template <typename T = void> T UpdateLocalDamageInfo(uintptr_t hitPawn, uintptr_t damageInfo, float allDamage) {
		return ((T (*)(PVEDebugInfoGUI*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x406B1E8))(this, hitPawn, damageInfo, allDamage);
	}
	template <typename T = void> T AddToLogQueue(void* queue, Il2CppString* log) {
		return ((T (*)(PVEDebugInfoGUI*, void*, Il2CppString*))(Il2CppBase() + 0x406BAF4))(this, queue, log);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(PVEDebugInfoGUI*))(Il2CppBase() + 0x406BCB8))(this);
	}
	template <typename T = void> T BeginDrawDebugInfo() {
		return ((T (*)(PVEDebugInfoGUI*))(Il2CppBase() + 0x406C0E0))(this);
	}
	template <typename T = void> T ShowDebugInfo(Il2CppString* text, uintptr_t style, bool col1Orcol2) {
		return ((T (*)(PVEDebugInfoGUI*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x406C1B8))(this, text, style, col1Orcol2);
	}
	template <typename T = void> T BeginShowGMButton() {
		return ((T (*)(PVEDebugInfoGUI*))(Il2CppBase() + 0x406C430))(this);
	}
	template <typename T = void> T AddGMButton(Il2CppString* Name, Il2CppString* CommandString, float x, float y) {
		return ((T (*)(PVEDebugInfoGUI*, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x406C504))(this, Name, CommandString, x, y);
	}

};

}
