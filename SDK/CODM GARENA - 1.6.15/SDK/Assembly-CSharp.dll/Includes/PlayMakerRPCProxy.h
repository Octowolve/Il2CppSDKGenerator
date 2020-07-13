#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerRPCProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayMakerRPCProxy"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& fsms() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayMakerRPCProxy*))(Il2CppBase() + 0x47FE904))(this);
	}
	template <typename T = void> T ForwardEvent(Il2CppString* eventName) {
		return ((T (*)(PlayMakerRPCProxy*, Il2CppString*))(Il2CppBase() + 0x47FE98C))(this, eventName);
	}

};

}
