#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObj"));
	}

	template <typename T = uintptr_t> T& m_listeners() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isEnvironmentAware() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isStaticObject() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_envData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_posData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_positionOffsetData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& CachedPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isRegistered() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_posOffsetData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& AK_NUM_LISTENERS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& listenerMask() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_IsColliderSet() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FF67C))(this);
	}
	template <typename T = bool> T get_IsEnvDataSet() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FF72C))(this);
	}
	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FF73C))(this);
	}
	template <typename T = bool> T get_IsUsingDefaultListeners() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FBB2C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ListenerList() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FBFB8))(this);
	}
	template <typename T = void> T AddListener(uintptr_t listener) {
		return ((T (*)(AkGameObj*, uintptr_t))(Il2CppBase() + 0x48FF80C))(this, listener);
	}
	template <typename T = void> T RemoveListener(uintptr_t listener) {
		return ((T (*)(AkGameObj*, uintptr_t))(Il2CppBase() + 0x48FF840))(this, listener);
	}
	template <typename T = uintptr_t> T Register() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FF874))(this);
	}
	template <typename T = uintptr_t> T UnRegister() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FF974))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x48FFA48))(this);
	}
	template <typename T = void> T CheckStaticStatus() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x490034C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x4900350))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x49003D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x49005B4))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(bool needUpdateCachedTransform) {
		return ((T (*)(AkGameObj*, bool))(Il2CppBase() + 0x490087C))(this, needUpdateCachedTransform);
	}
	template <typename T = Il2CppVector3> T GetForward() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x4900994))(this);
	}
	template <typename T = Il2CppVector3> T GetUpward() {
		return ((T (*)(AkGameObj*))(Il2CppBase() + 0x49009D0))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(AkGameObj*, uintptr_t))(Il2CppBase() + 0x4900A0C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(AkGameObj*, uintptr_t))(Il2CppBase() + 0x4900A28))(this, other);
	}

};

}
