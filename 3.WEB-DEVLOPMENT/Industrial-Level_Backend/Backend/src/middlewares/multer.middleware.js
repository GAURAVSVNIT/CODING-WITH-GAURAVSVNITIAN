import multer from "multer";

const storage = multer.diskStorage({
  destination: function (req, file, cb) {
    cb(null, "./public/uploads/");
  },
    filename: function (req, file, cb) {
        cb(null, Date.now() + "-" + file.originalname);
    },
    // fileFilter: function (req, file, cb) {
    //     const unoqueSuffix = Date.now() + "-" + (Math.random() * 1E9).toString(36);
    //     cb(null, file.fieldname + "-" + unoqueSuffix + "-" + file.originalname);
    // }
});

export const upload = multer({
  storage: storage,
//   limits: { fileSize: 5 * 1024 * 1024 }, // Limit file size to 5MB
//   fileFilter: function (req, file, cb) {
//     const fileTypes = /jpeg|jpg|png|gif/;
//     const mimetype = fileTypes.test(file.mimetype);
//     const extname = fileTypes.test(path.extname(file.originalname).toLowerCase());

//     if (mimetype && extname) {
//       return cb(null, true);
//     }
//     cb("Error: File upload only supports the following filetypes - " + fileTypes);
//   },
});