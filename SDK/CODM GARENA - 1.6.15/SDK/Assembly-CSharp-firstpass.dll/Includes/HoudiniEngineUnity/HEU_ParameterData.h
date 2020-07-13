#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUParameterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ParameterData"));
	}

	template <typename T = int32_t> T& _unityIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _labelName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _childParameterIDs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _choiceValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _intValues() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _floatValues() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _stringValues() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _toggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _gradient() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _animCurve() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _choiceLabels() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _choiceStringValues() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _choiceIntValues() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _parmInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _showChildren() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& _fileTypeInfo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _folderListChildrenProcessed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& _tabSelectedIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _paramInputNode() {
		return *(T*)((uintptr_t)this + 0xE4);
	}

	template <typename T = int32_t> T get_ParmID() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BADF38))(this);
	}
	template <typename T = int32_t> T get_ParentID() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4218))(this);
	}
	template <typename T = int32_t> T get_ChildIndex() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4220))(this);
	}
	template <typename T = int32_t> T get_ParmSize() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4228))(this);
	}
	template <typename T = bool> T IsInt() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE25BC))(this);
	}
	template <typename T = bool> T IsFloat() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE29CC))(this);
	}
	template <typename T = bool> T IsString() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE31E0))(this);
	}
	template <typename T = bool> T IsPathFile() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE31F4))(this);
	}
	template <typename T = bool> T HasMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4230))(this);
	}
	template <typename T = bool> T HasMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4238))(this);
	}
	template <typename T = bool> T HasUIMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4240))(this);
	}
	template <typename T = bool> T HasUIMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4248))(this);
	}
	template <typename T = int32_t> T get_IntMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4250))(this);
	}
	template <typename T = int32_t> T get_IntMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4304))(this);
	}
	template <typename T = int32_t> T get_IntUIMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE43B8))(this);
	}
	template <typename T = int32_t> T get_IntUIMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE446C))(this);
	}
	template <typename T = float> T get_FloatMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4520))(this);
	}
	template <typename T = float> T get_FloatMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4528))(this);
	}
	template <typename T = float> T get_FloatUIMin() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4530))(this);
	}
	template <typename T = float> T get_FloatUIMax() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4538))(this);
	}
	template <typename T = bool> T IsContainer() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4540))(this);
	}
	template <typename T = bool> T IsMultiParam() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE45E0))(this);
	}
	template <typename T = bool> T IsRamp() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE45F0))(this);
	}
	template <typename T = bool> T IsToggle() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE21CC))(this);
	}
	template <typename T = bool> T IsColor() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE3F68))(this);
	}
	template <typename T = Il2CppVector3> T ToVector3() {
		return ((T (*)(HEUParameterData*))(Il2CppBase() + 0x2BE4604))(this);
	}

};

}
