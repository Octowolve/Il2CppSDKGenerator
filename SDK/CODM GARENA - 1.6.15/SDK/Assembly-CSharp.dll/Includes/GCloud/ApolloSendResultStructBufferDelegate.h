#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendResultStructBufferDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendResultStructBufferDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t resultSize, uintptr_t buffer, int32_t size) {
		return ((T (*)(ApolloSendResultStructBufferDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x451E904))(this, objectId, function, resultBuffer, resultSize, buffer, size);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t resultSize, uintptr_t buffer, int32_t size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendResultStructBufferDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451EA00))(this, objectId, function, resultBuffer, resultSize, buffer, size, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendResultStructBufferDelegate*, uintptr_t))(Il2CppBase() + 0x451EB40))(this, result);
	}

};

}
