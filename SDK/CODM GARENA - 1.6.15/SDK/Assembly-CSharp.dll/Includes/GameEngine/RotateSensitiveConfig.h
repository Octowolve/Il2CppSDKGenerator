#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RotateSensitiveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RotateSensitiveConfig"));
	}

	template <typename T = Il2CppString*> T& RotateSensitiveModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& RotateSensitiveType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RotateSensitive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Low() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Middle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& High() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& EmulatorScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMiddleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHighValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T GetLowValue() {
		return ((T (*)(RotateSensitiveConfig*))(Il2CppBase() + 0x1E03C0C))(this);
	}
	template <typename T = float> T GetMiddleValue() {
		return ((T (*)(RotateSensitiveConfig*))(Il2CppBase() + 0x1E03D84))(this);
	}
	template <typename T = float> T GetHighValue() {
		return ((T (*)(RotateSensitiveConfig*))(Il2CppBase() + 0x1E03EFC))(this);
	}
	template <typename T = float> T GetRotateSensitive() {
		return ((T (*)(RotateSensitiveConfig*))(Il2CppBase() + 0x1E04074))(this);
	}

};

}
