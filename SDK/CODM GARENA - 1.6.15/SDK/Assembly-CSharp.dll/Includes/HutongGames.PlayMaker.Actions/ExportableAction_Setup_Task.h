#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_Task"));
	}

	template <typename T = uintptr_t> T& taskType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& targetCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& candiateObjects() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isHeadShot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetTypeList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetTriggers() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& capturePoint() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& number() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& powerUpID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& interval() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupTask*))(Il2CppBase() + 0x504B91C))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupTask*))(Il2CppBase() + 0x504C100))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupTask*))(Il2CppBase() + 0x504C178))(this);
	}
	template <typename T = bool> static T ErrorCheckm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x504C678))(0, e);
	}
	template <typename T = bool> static T ErrorCheckm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x504C724))(0, e);
	}
	template <typename T = bool> static T ErrorCheckm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x504C818))(0, e);
	}

};

}
