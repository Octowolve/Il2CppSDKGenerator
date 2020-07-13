#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendBufferDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendBufferDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, uintptr_t buffer, int32_t size) {
		return ((T (*)(ApolloSendBufferDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x451E080))(this, objectId, function, buffer, size);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, uintptr_t buffer, int32_t size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendBufferDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451E150))(this, objectId, function, buffer, size, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendBufferDelegate*, uintptr_t))(Il2CppBase() + 0x451E264))(this, result);
	}

};

}
