#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendResultStructDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendResultStructDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t size) {
		return ((T (*)(ApolloSendResultStructDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x451EBA0))(this, objectId, function, resultBuffer, size);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, uintptr_t resultBuffer, int32_t size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendResultStructDelegate*, uint64_t, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451EC70))(this, objectId, function, resultBuffer, size, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendResultStructDelegate*, uintptr_t))(Il2CppBase() + 0x451ED84))(this, result);
	}

};

}
