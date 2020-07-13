#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GraphicsDebuggerClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "GraphicsDebuggerClient"));
	}

	template <typename T = uintptr_t> static T& kMsgPingPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kMsgFetchRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& kMsgApplyGlobalKeywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& kMsgApplyShaderLod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& kMsgShaderReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& kMsgDestroyShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& kMsgReportPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& kMsgReportRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = void> static T InitializeOnLoadEntryPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C5ED64))(0);
	}

};

}
