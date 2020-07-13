#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class BaseInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "BaseInputModule"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_RaycastResultCache() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_AxisEventData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EventSystem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BaseEventData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_InputOverride() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_DefaultInput() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_input() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFA96C))(this);
	}
	template <typename T = uintptr_t> T get_eventSystem() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFAC70))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFAC78))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFAEF0))(this);
	}
	template <typename T = void> T Process() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> static T FindFirstRaycast(Il2CppList<uintptr_t>* candidates) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CFAF1C))(0, candidates);
	}
	template <typename T = uintptr_t> static T DetermineMoveDirection(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x3CFB1C8))(0, x, y);
	}
	template <typename T = uintptr_t> static T DetermineMoveDirection_1(float x, float y, float deadZone) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3CFB1E8))(0, x, y, deadZone);
	}
	template <typename T = uintptr_t> static T FindCommonRoot(uintptr_t g1, uintptr_t g2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFB320))(0, g1, g2);
	}
	template <typename T = void> T HandlePointerExitAndEnter(uintptr_t currentPointerData, uintptr_t newEnterTarget) {
		return ((T (*)(BaseInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFB59C))(this, currentPointerData, newEnterTarget);
	}
	template <typename T = uintptr_t> T GetAxisEventData(float x, float y, float moveDeadZone) {
		return ((T (*)(BaseInputModule*, float, float, float))(Il2CppBase() + 0x3CFBE98))(this, x, y, moveDeadZone);
	}
	template <typename T = uintptr_t> T GetBaseEventData() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFBFF8))(this);
	}
	template <typename T = bool> T IsPointerOverGameObject(int32_t pointerId) {
		return ((T (*)(BaseInputModule*, int32_t))(Il2CppBase() + 0x3CFC0C8))(this, pointerId);
	}
	template <typename T = bool> T ShouldActivateModule() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFC0D0))(this);
	}
	template <typename T = void> T DeactivateModule() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFC124))(this);
	}
	template <typename T = void> T ActivateModule() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFC128))(this);
	}
	template <typename T = void> T UpdateModule() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFC12C))(this);
	}
	template <typename T = bool> T IsModuleSupported() {
		return ((T (*)(BaseInputModule*))(Il2CppBase() + 0x3CFC130))(this);
	}

};

}
