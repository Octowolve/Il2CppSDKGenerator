#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendVoidMethodDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendVoidMethodDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, int32_t methodId) {
		return ((T (*)(ApolloSendVoidMethodDelegate*, uint64_t, int32_t))(Il2CppBase() + 0x451EFAC))(this, objectId, methodId);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, int32_t methodId, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendVoidMethodDelegate*, uint64_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451F05C))(this, objectId, methodId, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendVoidMethodDelegate*, uintptr_t))(Il2CppBase() + 0x451F13C))(this, result);
	}

};

}
