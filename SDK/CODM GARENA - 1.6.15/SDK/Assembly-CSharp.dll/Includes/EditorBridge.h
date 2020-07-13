#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EditorBridge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EditorBridge"));
	}

	template <typename T = void*> static T& OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& GetAssetGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& GetAssetByGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

}
