#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ApolloSendStructDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ApolloSendStructDelegate"));
	}


	template <typename T = void> T Invoke(uint64_t objectId, Il2CppString* function, uintptr_t param) {
		return ((T (*)(ApolloSendStructDelegate*, uint64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x451EDD4))(this, objectId, function, param);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t objectId, Il2CppString* function, uintptr_t param, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApolloSendStructDelegate*, uint64_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451EE94))(this, objectId, function, param, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApolloSendStructDelegate*, uintptr_t))(Il2CppBase() + 0x451EF7C))(this, result);
	}

};

}
