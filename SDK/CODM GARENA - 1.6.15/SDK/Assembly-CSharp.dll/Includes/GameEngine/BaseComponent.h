#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseComponent"));
	}

	template <typename T = int32_t> static T& kPositionChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kRotationChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kScaleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kTRSChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bHasDestroy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_EventProcessor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_InTransformOptimizeNotify() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_TransformChangedMark() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_DoSendTransformChanged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDoSendTransformChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSendTransformChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOptimizeTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransformChangedMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceDoSendTransformChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360AF08))(this);
	}
	template <typename T = void> T set_Root(uintptr_t value) {
		return ((T (*)(BaseComponent*, uintptr_t))(Il2CppBase() + 0x360AF10))(this, value);
	}
	template <typename T = bool> T get_InTransformOptimizeNotify() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360AF18))(this);
	}
	template <typename T = void> T SetDoSendTransformChanged(bool value) {
		return ((T (*)(BaseComponent*, bool))(Il2CppBase() + 0x360AF20))(this, value);
	}
	template <typename T = void> T ForceSendTransformChanged(int32_t transformChangedMark) {
		return ((T (*)(BaseComponent*, int32_t))(Il2CppBase() + 0x360AFC8))(this, transformChangedMark);
	}
	template <typename T = bool> T EnableOptimizeTransform() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B16C))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B20C))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(BaseComponent*, Il2CppVector3))(Il2CppBase() + 0x360B258))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_Rotation() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B4CC))(this);
	}
	template <typename T = void> T set_Rotation(Il2CppQuaternion value) {
		return ((T (*)(BaseComponent*, Il2CppQuaternion))(Il2CppBase() + 0x360B518))(this, value);
	}
	template <typename T = void> T UpdateTransformChangedMark(int32_t markChanged) {
		return ((T (*)(BaseComponent*, int32_t))(Il2CppBase() + 0x360B5A4))(this, markChanged);
	}
	template <typename T = uintptr_t> T get_EventProcessor() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B654))(this);
	}
	template <typename T = void> T SetActorRoot(uintptr_t inRoot) {
		return ((T (*)(BaseComponent*, uintptr_t))(Il2CppBase() + 0x360B65C))(this, inRoot);
	}
	template <typename T = void> T PreTickTransformOptimize() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B704))(this);
	}
	template <typename T = void> T PostTickTransformOptimize() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B7B8))(this);
	}
	template <typename T = void> T ForceDoSendTransformChanged() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B8A4))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360B984))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360BA5C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360BAF4))(this);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(BaseComponent*, float))(Il2CppBase() + 0x360BB8C))(this, deltaTime);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360BC2C))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360BCE4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BaseComponent*, float))(Il2CppBase() + 0x360BD7C))(this, deltaTime);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360BED8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BaseComponent*))(Il2CppBase() + 0x360C068))(this);
	}

};

}
