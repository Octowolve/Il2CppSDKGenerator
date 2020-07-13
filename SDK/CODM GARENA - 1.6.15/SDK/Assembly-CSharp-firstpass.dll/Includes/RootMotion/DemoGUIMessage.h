#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class DemoGUIMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "DemoGUIMessage"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnGUI() {
		return ((T (*)(DemoGUIMessage*))(Il2CppBase() + 0x38A2ED4))(this);
	}

};

}
