#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUToolsInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ToolsInfo"));
	}

	template <typename T = float> T& _paintBrushSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& _paintBrushOpacity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paintIntValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paintFloatValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paintStringValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _lastAttributesGeoID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _lastAttributesPartID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _lastAttributeNodeName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _lastAttributeName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _brushHandleColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _affectedAreaPaintColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _liveUpdate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _isPainting() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = float> T& _editPointBoxSize() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _editPointBoxUnselectedColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _editPointBoxSelectedColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _recacheRequired() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _paintMergeMode() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& _showOnlyEditGeometry() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _alwaysCookUpstream() {
		return *(T*)((uintptr_t)this + 0x81);
	}


};

}
