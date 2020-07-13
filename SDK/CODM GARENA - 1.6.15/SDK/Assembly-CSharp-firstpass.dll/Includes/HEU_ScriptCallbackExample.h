#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HEUScriptCallbackExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HEU_ScriptCallbackExample"));
	}

	template <typename T = Il2CppString*> T& _msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T AssetCallbackWithMsg(Il2CppString* msg) {
		return ((T (*)(HEUScriptCallbackExample*, Il2CppString*))(Il2CppBase() + 0x4C5F704))(this, msg);
	}
	template <typename T = void> T AssetCallbackNoMsg() {
		return ((T (*)(HEUScriptCallbackExample*))(Il2CppBase() + 0x4C5F810))(this);
	}

};

}
