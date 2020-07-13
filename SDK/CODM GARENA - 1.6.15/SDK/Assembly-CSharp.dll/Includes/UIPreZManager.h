#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPreZManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPreZManager"));
	}

	template <typename T = uintptr_t> T& PreZGO() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Filter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Render() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& UsePreZ() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Mat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_VectList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_IndexList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RectInfoList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMeshValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRectChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsRectChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRectValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T CheckMeshValid() {
		return ((T (*)(UIPreZManager*))(Il2CppBase() + 0x2F87F7C))(this);
	}
	template <typename T = bool> T IsRectChanged(float fov) {
		return ((T (*)(UIPreZManager*, float))(Il2CppBase() + 0x2F88624))(this, fov);
	}
	template <typename T = bool> T IsRectChanged_1(uintptr_t uiType, Il2CppVector3 pos, Il2CppVector3 uiSize, uintptr_t* index) {
		return ((T (*)(UIPreZManager*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x2F88788))(this, uiType, pos, uiSize, index);
	}
	template <typename T = void> T AddRect(uintptr_t uiType, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 uiSize) {
		return ((T (*)(UIPreZManager*, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x2F889E8))(this, uiType, pos, rot, uiSize);
	}
	template <typename T = bool> T CheckRectValid(uintptr_t rectInfo, int32_t index, float fov) {
		return ((T (*)(UIPreZManager*, uintptr_t, int32_t, float))(Il2CppBase() + 0x2F8F108))(this, rectInfo, index, fov);
	}
	template <typename T = bool> T IsChangingFOV(uintptr_t fov) {
		return ((T (*)(UIPreZManager*, uintptr_t))(Il2CppBase() + 0x2F8FF3C))(this, fov);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIPreZManager*, float))(Il2CppBase() + 0x2F9010C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UIPreZManager*, float))(Il2CppBase() + 0x2F90648))(this, P0);
	}

};

}
