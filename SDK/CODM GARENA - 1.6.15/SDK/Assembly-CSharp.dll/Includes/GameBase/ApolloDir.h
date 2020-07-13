#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ApolloDir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ApolloDir"));
	}

	template <typename T = float> static T& GCLOUD_CONNECT_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GCLOUD_RECV_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GCLOUD_MAX_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RESULT_OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Status() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitApolloDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryTreeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTdir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryTdirAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T InitApolloDir() {
		return ((T (*)(ApolloDir*))(Il2CppBase() + 0x3B7D1C0))(this);
	}
	template <typename T = void> T OnQueryTreeEvent(uintptr_t result, uintptr_t treeList) {
		return ((T (*)(ApolloDir*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B7D334))(this, result, treeList);
	}
	template <typename T = void> T QueryDir(uintptr_t callback) {
		return ((T (*)(ApolloDir*, uintptr_t))(Il2CppBase() + 0x3B7D6F8))(this, callback);
	}
	template <typename T = void> T DoCallback(uintptr_t treeList, uintptr_t result) {
		return ((T (*)(ApolloDir*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B7D52C))(this, treeList, result);
	}
	template <typename T = void> T ClearDir() {
		return ((T (*)(ApolloDir*))(Il2CppBase() + 0x3B7DC00))(this);
	}
	template <typename T = uintptr_t> T UpdateTdir() {
		return ((T (*)(ApolloDir*))(Il2CppBase() + 0x3B7DA40))(this);
	}
	template <typename T = uintptr_t> T QueryTdirAsync() {
		return ((T (*)(ApolloDir*))(Il2CppBase() + 0x3B7DB20))(this);
	}

};

}
