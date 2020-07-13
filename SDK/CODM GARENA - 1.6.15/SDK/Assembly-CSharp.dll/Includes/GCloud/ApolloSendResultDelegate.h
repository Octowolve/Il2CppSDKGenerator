#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendResultDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendResultDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, int32_t result) {
		return ((T (*)(ApolloSendResultDelegate*, uint64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x451E6FC))(this, objectId, function, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, int32_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendResultDelegate*, uint64_t, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451E7BC))(this, objectId, function, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendResultDelegate*, uintptr_t))(Il2CppBase() + 0x451E8A0))(this, result);
	}

};

}
