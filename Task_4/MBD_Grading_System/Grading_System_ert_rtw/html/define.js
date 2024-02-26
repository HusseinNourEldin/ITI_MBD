function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["Grading_System_U"] = {file: "Grading_System_c.html",line:20,type:"var"};
this.def["Grading_System_Y"] = {file: "Grading_System_c.html",line:23,type:"var"};
this.def["Grading_System.c:Grading_System_M_"] = {file: "Grading_System_c.html",line:26,type:"var"};
this.def["Grading_System_M"] = {file: "Grading_System_c.html",line:27,type:"var"};
this.def["Grading_System_step"] = {file: "Grading_System_c.html",line:30,type:"fcn"};
this.def["Grading_System_initialize"] = {file: "Grading_System_c.html",line:92,type:"fcn"};
this.def["Grading_System_terminate"] = {file: "Grading_System_c.html",line:108,type:"fcn"};
this.def["ConstP_Grading_System_T"] = {file: "Grading_System_h.html",line:62,type:"type"};
this.def["ExtU_Grading_System_T"] = {file: "Grading_System_h.html",line:67,type:"type"};
this.def["ExtY_Grading_System_T"] = {file: "Grading_System_h.html",line:72,type:"type"};
this.def["RT_MODEL_Grading_System_T"] = {file: "Grading_System_types_h.html",line:22,type:"type"};
this.def["Grading_System_ConstP"] = {file: "Grading_System_data_c.html",line:20,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Grading_System_c.html"] = "../Grading_System.c";
	this.html2Root["Grading_System_c.html"] = "Grading_System_c.html";
	this.html2SrcPath["Grading_System_h.html"] = "../Grading_System.h";
	this.html2Root["Grading_System_h.html"] = "Grading_System_h.html";
	this.html2SrcPath["Grading_System_private_h.html"] = "../Grading_System_private.h";
	this.html2Root["Grading_System_private_h.html"] = "Grading_System_private_h.html";
	this.html2SrcPath["Grading_System_types_h.html"] = "../Grading_System_types.h";
	this.html2Root["Grading_System_types_h.html"] = "Grading_System_types_h.html";
	this.html2SrcPath["Grading_System_data_c.html"] = "../Grading_System_data.c";
	this.html2Root["Grading_System_data_c.html"] = "Grading_System_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Grading_System_c.html","Grading_System_h.html","Grading_System_private_h.html","Grading_System_types_h.html","Grading_System_data_c.html","rtwtypes_h.html"];
