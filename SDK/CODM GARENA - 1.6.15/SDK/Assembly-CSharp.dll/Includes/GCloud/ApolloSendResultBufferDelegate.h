#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendResultBufferDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendResultBufferDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, int32_t result, uintptr_t buffer, int32_t size) {
		return ((T (*)(ApolloSendResultBufferDelegate*, uint64_t, Il2CppString*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x451E4B4))(this, objectId, function, result, buffer, size);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, int32_t result, uintptr_t buffer, int32_t size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendResultBufferDelegate*, uint64_t, Il2CppString*, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451E57C))(this, objectId, function, result, buffer, size, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendResultBufferDelegate*, uintptr_t))(Il2CppBase() + 0x451E6AC))(this, result);
	}

};

}
