#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DestructibleSceneObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DestructibleSceneObjectInfo"));
	}

	template <typename T = uintptr_t> T& HealthLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& Nearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Furthest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FurthestScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FixedNameOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& OffsetPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& HealthBar() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bStayInScreen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_owerTransform() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHealthAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHealthScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(DestructibleSceneObjectInfo*, uintptr_t))(Il2CppBase() + 0x40E2124))(this, owner);
	}
	template <typename T = void> T SetHealthAlpha(float value) {
		return ((T (*)(DestructibleSceneObjectInfo*, float))(Il2CppBase() + 0x40E2374))(this, value);
	}
	template <typename T = void> T SetHealthScale(float value) {
		return ((T (*)(DestructibleSceneObjectInfo*, float))(Il2CppBase() + 0x40E249C))(this, value);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCamera, uintptr_t uiCamera) {
		return ((T (*)(DestructibleSceneObjectInfo*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x40E2680))(this, dt, worldCamera, uiCamera);
	}

};

}
