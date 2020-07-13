#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VirtualBind
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VirtualBind"));
	}

	template <typename T = Il2CppVector3> T& m_LocalPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppQuaternion> T& m_LocalRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_EnableBind() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& OnParentDestroy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_WillTriggerDestroyEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Bind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindWithoutMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindWithWorldRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(VirtualBind*))(Il2CppBase() + 0x2E90050))(this);
	}
	template <typename T = void> T set_Target(uintptr_t value) {
		return ((T (*)(VirtualBind*, uintptr_t))(Il2CppBase() + 0x2E90058))(this, value);
	}
	template <typename T = Il2CppVector3> T get_WorldPosition() {
		return ((T (*)(VirtualBind*))(Il2CppBase() + 0x2E90110))(this);
	}
	template <typename T = void> T set_WorldPosition(Il2CppVector3 value) {
		return ((T (*)(VirtualBind*, Il2CppVector3))(Il2CppBase() + 0x2E9012C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_WorldRotation() {
		return ((T (*)(VirtualBind*))(Il2CppBase() + 0x2E90250))(this);
	}
	template <typename T = void> T set_WorldRotation(Il2CppQuaternion value) {
		return ((T (*)(VirtualBind*, Il2CppQuaternion))(Il2CppBase() + 0x2E9026C))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VirtualBind*))(Il2CppBase() + 0x2E9031C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(VirtualBind*))(Il2CppBase() + 0x2E90574))(this);
	}
	template <typename T = uintptr_t> static T Bind(uintptr_t child, uintptr_t parent, Il2CppVector3 localPosition, Il2CppQuaternion localRotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x2E90618))(0, child, parent, localPosition, localRotation);
	}
	template <typename T = uintptr_t> static T Bind_1(uintptr_t child, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E909A4))(0, child, parent);
	}
	template <typename T = uintptr_t> static T BindWithoutMove(uintptr_t child, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E90AA8))(0, child, parent);
	}
	template <typename T = uintptr_t> static T BindWithWorldRT(uintptr_t child, uintptr_t parent, Il2CppVector3 worldPosition, Il2CppQuaternion worldRotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x2E90BFC))(0, child, parent, worldPosition, worldRotation);
	}

};

}
