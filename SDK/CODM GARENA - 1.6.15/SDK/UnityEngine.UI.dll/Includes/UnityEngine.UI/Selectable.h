#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Selectable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Selectable"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& s_List() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Navigation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Transition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Colors() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_SpriteState() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_AnimationTriggers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_Interactable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_TargetGraphic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_GroupsAllowInteraction() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CurrentSelectionState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& isPointerInside() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& isPointerDown() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& hasSelection() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CanvasGroupCache() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_allSelectables() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E359A0))(0);
	}
	template <typename T = uintptr_t> T get_navigation() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2FAEC))(this);
	}
	template <typename T = void> T set_navigation(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35A50))(this, value);
	}
	template <typename T = uintptr_t> T get_transition() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35B30))(this);
	}
	template <typename T = void> T set_transition(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35B38))(this, value);
	}
	template <typename T = uintptr_t> T get_colors() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35BDC))(this);
	}
	template <typename T = void> T set_colors(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35BF4))(this, value);
	}
	template <typename T = uintptr_t> T get_spriteState() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35D40))(this);
	}
	template <typename T = void> T set_spriteState(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35D54))(this, value);
	}
	template <typename T = uintptr_t> T get_animationTriggers() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35E1C))(this);
	}
	template <typename T = void> T set_animationTriggers(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35E24))(this, value);
	}
	template <typename T = uintptr_t> T get_targetGraphic() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35EC8))(this);
	}
	template <typename T = void> T set_targetGraphic(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E35ED0))(this, value);
	}
	template <typename T = bool> T get_interactable() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35F74))(this);
	}
	template <typename T = void> T set_interactable(bool value) {
		return ((T (*)(Selectable*, bool))(Il2CppBase() + 0x4E35F7C))(this, value);
	}
	template <typename T = bool> T get_isPointerInside() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36254))(this);
	}
	template <typename T = void> T set_isPointerInside(bool value) {
		return ((T (*)(Selectable*, bool))(Il2CppBase() + 0x4E3625C))(this, value);
	}
	template <typename T = bool> T get_isPointerDown() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36264))(this);
	}
	template <typename T = void> T set_isPointerDown(bool value) {
		return ((T (*)(Selectable*, bool))(Il2CppBase() + 0x4E3626C))(this, value);
	}
	template <typename T = bool> T get_hasSelection() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36274))(this);
	}
	template <typename T = void> T set_hasSelection(bool value) {
		return ((T (*)(Selectable*, bool))(Il2CppBase() + 0x4E3627C))(this, value);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36284))(this);
	}
	template <typename T = void> T set_image(uintptr_t value) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E3633C))(this, value);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36344))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E363C8))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E364A8))(this);
	}
	template <typename T = bool> T IsInteractable() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E366FC))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36720))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2E7C8))(this);
	}
	template <typename T = void> T OnSetProperty() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E35B28))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2EA30))(this);
	}
	template <typename T = uintptr_t> T get_currentSelectionState() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E36794))(this);
	}
	template <typename T = void> T InstantClearState() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E3679C))(this);
	}
	template <typename T = void> T DoStateTransition(uintptr_t state, bool instant) {
		return ((T (*)(Selectable*, uintptr_t, bool))(Il2CppBase() + 0x4E36CF0))(this, state, instant);
	}
	template <typename T = uintptr_t> T FindSelectable(Il2CppVector3 dir) {
		return ((T (*)(Selectable*, Il2CppVector3))(Il2CppBase() + 0x4E36FA0))(this, dir);
	}
	template <typename T = Il2CppVector3> static T GetPointOnRectEdge(uintptr_t rect, Il2CppVector2 dir) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x4E37634))(0, rect, dir);
	}
	template <typename T = void> T Navigate(uintptr_t eventData, uintptr_t sel) {
		return ((T (*)(Selectable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E378F0))(this, eventData, sel);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2FB04))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2FC50))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2FD9C))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E2FEE8))(this);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E2F9E0))(this, eventData);
	}
	template <typename T = void> T StartColorTween(uintptr_t targetColor, bool instant) {
		return ((T (*)(Selectable*, uintptr_t, bool))(Il2CppBase() + 0x4E36850))(this, targetColor, instant);
	}
	template <typename T = void> T DoSpriteSwap(uintptr_t newSprite) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E36998))(this, newSprite);
	}
	template <typename T = void> T TriggerAnimation(Il2CppString* triggername) {
		return ((T (*)(Selectable*, Il2CppString*))(Il2CppBase() + 0x4E36A84))(this, triggername);
	}
	template <typename T = bool> T IsHighlighted(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37A00))(this, eventData);
	}
	template <typename T = bool> T IsPressed(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37D34))(this, eventData);
	}
	template <typename T = bool> T IsPressed_1() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E37CE8))(this);
	}
	template <typename T = void> T UpdateSelectionState(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E361EC))(this, eventData);
	}
	template <typename T = void> T EvaluateAndTransitionToSelectionState(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37D80))(this, eventData);
	}
	template <typename T = void> T InternalEvaluateAndTransitionToSelectionState(bool instant) {
		return ((T (*)(Selectable*, bool))(Il2CppBase() + 0x4E36728))(this, instant);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E2F3B8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E2F68C))(this, eventData);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37DE8))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37DF4))(this, eventData);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37E00))(this, eventData);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(Selectable*, uintptr_t))(Il2CppBase() + 0x4E37E0C))(this, eventData);
	}
	template <typename T = void> T Select() {
		return ((T (*)(Selectable*))(Il2CppBase() + 0x4E37E18))(this);
	}

};

}
