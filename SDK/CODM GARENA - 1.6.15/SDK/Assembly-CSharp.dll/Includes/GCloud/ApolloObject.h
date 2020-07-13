#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloObject"));
	}

	template <typename T = uint64_t> static T& s_objectId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& ObjectId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& AcceptMonoBehaviour() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Reflectible() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& UpdateTimeLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Removable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformVoidMethodWithId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uint64_t> T get_ObjectId() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519180))(this);
	}
	template <typename T = void> T set_ObjectId(uint64_t value) {
		return ((T (*)(ApolloObject*, uint64_t))(Il2CppBase() + 0x4519188))(this, value);
	}
	template <typename T = bool> T get_AcceptMonoBehaviour() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519198))(this);
	}
	template <typename T = void> T set_AcceptMonoBehaviour(bool value) {
		return ((T (*)(ApolloObject*, bool))(Il2CppBase() + 0x4518F30))(this, value);
	}
	template <typename T = bool> T get_Reflectible() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x45191A0))(this);
	}
	template <typename T = void> T set_Reflectible(bool value) {
		return ((T (*)(ApolloObject*, bool))(Il2CppBase() + 0x4518F28))(this, value);
	}
	template <typename T = float> T get_UpdateTimeLeft() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x45191A8))(this);
	}
	template <typename T = void> T set_UpdateTimeLeft(float value) {
		return ((T (*)(ApolloObject*, float))(Il2CppBase() + 0x4518F40))(this, value);
	}
	template <typename T = void> T init() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4518F48))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519848))(this);
	}
	template <typename T = void> T Initialize(bool reflectible, bool acceptMonoBehaviour) {
		return ((T (*)(ApolloObject*, bool, bool))(Il2CppBase() + 0x4519A40))(this, reflectible, acceptMonoBehaviour);
	}
	template <typename T = bool> T get_Removable() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519B48))(this);
	}
	template <typename T = void> T set_Removable(bool value) {
		return ((T (*)(ApolloObject*, bool))(Il2CppBase() + 0x4518F38))(this, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x451996C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519B50))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(ApolloObject*, float))(Il2CppBase() + 0x4519C84))(this, deltaTime);
	}
	template <typename T = void> T OnTimeOut() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519D54))(this);
	}
	template <typename T = void> T PerformVoidMethodWithId(int32_t methodId) {
		return ((T (*)(ApolloObject*, int32_t))(Il2CppBase() + 0x4519E1C))(this, methodId);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x4519EEC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(ApolloObject*, bool))(Il2CppBase() + 0x4519FB4))(this, pauseStatus);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x450B7F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(ApolloObject*))(Il2CppBase() + 0x451A110))(this);
	}

};

}
