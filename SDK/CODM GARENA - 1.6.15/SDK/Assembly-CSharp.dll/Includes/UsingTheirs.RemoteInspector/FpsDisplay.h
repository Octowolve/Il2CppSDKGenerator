#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class FpsDisplay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "FpsDisplay"));
	}

	template <typename T = Il2CppRect> T& displayRect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& fontSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fontColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& prefix() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lastFps() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& lastFrameTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(FpsDisplay*))(Il2CppBase() + 0x422C848))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(FpsDisplay*))(Il2CppBase() + 0x422C930))(this);
	}

};

}
