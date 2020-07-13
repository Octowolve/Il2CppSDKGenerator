#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreamingLayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreamingLayerInfo"));
	}

	template <typename T = uintptr_t> T& layerType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& debugCellColor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& tileSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& tileOrigin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lodDistances() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& sceneObjectSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& sceneObjectThicknessMax() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& includeTags() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& excludeTags() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& defaultExportFolderName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& defaultExportSceneNamePrefix() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ignoreY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_exportFolderName() {
		return ((T (*)(SceneStreamingLayerInfo*))(Il2CppBase() + 0x3C01AF8))(this);
	}
	template <typename T = Il2CppString*> T get_exportSceneNamePrefix() {
		return ((T (*)(SceneStreamingLayerInfo*))(Il2CppBase() + 0x3C01C04))(this);
	}
	template <typename T = bool> T CheckValid() {
		return ((T (*)(SceneStreamingLayerInfo*))(Il2CppBase() + 0x3C01D48))(this);
	}

};

}
