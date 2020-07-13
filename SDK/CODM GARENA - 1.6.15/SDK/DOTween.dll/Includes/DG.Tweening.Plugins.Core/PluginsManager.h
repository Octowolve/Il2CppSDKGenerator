#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core {

class PluginsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core", "PluginsManager"));
	}

	template <typename T = uintptr_t> static T& _floatPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _doublePlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _intPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _uintPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _longPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _ulongPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _vector2Plugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _vector3Plugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _vector4Plugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _quaternionPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& _colorPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _rectPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _rectOffsetPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _stringPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _vector3ArrayPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _color2Plugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& _MaxCustomPlugins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& _customPlugins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void*> static T GetDefaultPlugin() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B53C24))(0);
	}
	template <typename T = void*> static T GetCustomPlugin() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B53A24))(0);
	}
	template <typename T = void> static T PurgeAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AA998))(0);
	}

};

}
